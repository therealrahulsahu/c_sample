#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define MAX_CHARACTERS 1005
#define MAX_PARAGRAPHS 5

struct word {
    char* data;
};

struct sentence {
    struct word* data;
    int word_count;
};

struct paragraph {
    struct sentence* data ;
    int sentence_count;
};

struct document {
    struct paragraph* data;
    int paragraph_count;
};
struct word make_word(char *var)
{
    struct word my_word;
    my_word.data = (char *)calloc(strlen(var)+1,sizeof(char));
    strcpy(my_word.data,var);
    return my_word;
}
struct sentence make_sentence(char *var)
{
    int word_count=0;
    for(int i=0;var[i]!='\0';i++)
    {
        if(var[i]==' ')
            word_count++;
    }
    word_count++;

    struct sentence my_sent;
    my_sent.word_count=word_count;
    my_sent.data = (struct word*)calloc(word_count,sizeof(struct word));

    int pt=0;
    char tem[30];
    int i=0,j=0;
    while(var[i])
    {
        if(var[i]!=' ')
        {
            tem[j++]=var[i];
        }
        else
        {
            tem[j]='\0';
            my_sent.data[pt++]=make_word(tem);
            j=0;
        }
        i++;
    }
    tem[j]='\0';
    my_sent.data[pt]=make_word(tem);

    return my_sent;

}
struct paragraph make_paragraph(char *var)
{
    int sen_count = 0;
    for(int i=0;var[i]!='\0';i++)
    {
        if(var[i]=='.')
            sen_count++;
    }

    struct paragraph my_para;
    my_para.sentence_count=sen_count;
    my_para.data = (struct sentence *)calloc(sen_count, sizeof(struct sentence));

    char temp[200];
    int i=0,j=0,pt=0;
    while(var[i])
    {
        if(var[i]!='.')
        {
            temp[j++]=var[i];
        }
        else
        {
            temp[j]='\0';
            my_para.data[pt++] = make_sentence(temp);
            j=0;
        }
        i++;
    }
    return my_para;
}
struct document get_document(char* text)
{
    int para_count=0;
    for(int i=0;text[i]!='\0';i++)
    {
        if(text[i]=='\n')
            para_count++;
    }

    struct document my_doc;
    my_doc.paragraph_count = para_count;
    my_doc.data = (struct paragraph*)calloc(para_count, sizeof(struct paragraph));

    char temp[1000];
    int pt=0,i=0,j=0;
    while(text[i])
    {
        if(text[i]!='\n')
        {
            temp[j++]=text[i];
        }
        else
        {
            temp[j]='\0';
            my_doc.data[pt++]=make_paragraph(temp);
            j=0;
        }
        i++;
    }
    temp[j]='\0';
    my_doc.data[pt]=make_paragraph(temp);
    return my_doc;
}

struct word kth_word_in_mth_sentence_of_nth_paragraph(struct document Doc, int k, int m, int n)
{
    return Doc.data[n-1].data[m-1].data[k-1];
}

struct sentence kth_sentence_in_mth_paragraph(struct document Doc, int k, int m) {

    return Doc.data[m-1].data[k-1];
}

struct paragraph kth_paragraph(struct document Doc, int k) {
    return Doc.data[k-1];
}


void print_word(struct word w) {
    printf("%s", w.data);
}

void print_sentence(struct sentence sen) {
    for(int i = 0; i < sen.word_count; i++) {
        print_word(sen.data[i]);
        if (i != sen.word_count - 1) {
            printf(" ");
        }
    }
}

void print_paragraph(struct paragraph para) {
    for(int i = 0; i < para.sentence_count; i++){
        print_sentence(para.data[i]);
        printf(".");
    }
}

void print_document(struct document doc) {
    for(int i = 0; i < doc.paragraph_count; i++) {
        print_paragraph(doc.data[i]);
        if (i != doc.paragraph_count - 1)
            printf("\n");
    }
}

char* get_input_text() {
    int paragraph_count;
    scanf("%d", &paragraph_count);

    char p[MAX_PARAGRAPHS][MAX_CHARACTERS], doc[MAX_CHARACTERS];
    memset(doc, 0, sizeof(doc));
    getchar();
    for (int i = 0; i < paragraph_count; i++) {
        scanf("%[^\n]%*c", p[i]);
        strcat(doc, p[i]);
        if (i != paragraph_count - 1)
            strcat(doc, "\n");
    }

    char* returnDoc = (char*)malloc((strlen (doc)+1) * (sizeof(char)));
    strcpy(returnDoc, doc);
    return returnDoc;
}

int main()
{
    char* text = get_input_text();
    struct document Doc = get_document(text);

    int q;
    scanf("%d", &q);

    while (q--) {
        int type;
        scanf("%d", &type);

        if (type == 3){
            int k, m, n;
            scanf("%d %d %d", &k, &m, &n);
            struct word w = kth_word_in_mth_sentence_of_nth_paragraph(Doc, k, m, n);
            print_word(w);
        }

        else if (type == 2) {
            int k, m;
            scanf("%d %d", &k, &m);
            struct sentence sen= kth_sentence_in_mth_paragraph(Doc, k, m);
            print_sentence(sen);
        }

        else{
            int k;
            scanf("%d", &k);
            struct paragraph para = kth_paragraph(Doc, k);
            print_paragraph(para);
        }
        printf("\n");
    }
}