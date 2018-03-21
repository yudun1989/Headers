//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSArray.h>

@class BaseInfoModel, NSMutableString, UIWebView;
@protocol FavRichTextDelegate;

@interface FavoritesRichText : NSArray
{
    NSMutableString *_html;
    BaseInfoModel *_model;
    int _status;
    id <FavRichTextDelegate> _delegate;
    int _elemCount;
    UIWebView *_webView;
}

+ (id)textContentFromHtml:(id)arg1 delimiter:(id)arg2;
+ (id)getBaseUrl;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) id <FavRichTextDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) BaseInfoModel *model; // @synthesize model=_model;
- (id)imgIdWithUrl:(id)arg1 andIndex:(int)arg2;
- (int)imgIndexFromImgRequest:(id)arg1;
- (id)imgRequestFromPhotoUrl:(id)arg1 andImgIndex:(int)arg2;
- (struct CGRect)getBoundingRectForImg:(int)arg1 fromImgList:(id)arg2;
- (void)reloadPhoto:(id)arg1 localPath:(id)arg2;
- (id)getSysfaceHtml:(id)arg1 startedWithX14:(_Bool)arg2 addQuotes:(_Bool)arg3;
- (unsigned long long)processContentAfterEditing;
- (id)getCompatibleRichMediaHtml:(id)arg1 forEditor:(_Bool)arg2;
- (id)getRichmediaHtml:(id)arg1 forEditor:(_Bool)arg2;
- (id)getPureTextHtml:(id)arg1;
- (id)getBriefTextHtml:(id)arg1;
- (id)getHtmlByParsingText:(id)arg1 ignoreUrls:(_Bool)arg2;
- (id)htmlBySetHtml:(id)arg1 withHeaderHtml:(id)arg2 andFooterHtml:(id)arg3;
- (id)getHtmlWithTemplate:(id)arg1 head:(id)arg2 body:(id)arg3;
- (id)getHtml;
- (id)getHtmlForEditor:(_Bool)arg1;
- (void)addHtmlEnd;
- (void)addHtmlStart;
- (void)addSysFace:(id)arg1 faceName:(id)arg2;
- (void)addNumber:(id)arg1;
- (void)addUrl:(id)arg1 text:(id)arg2;
- (void)addPicture:(id)arg1 imgIndex:(int)arg2 thumbUrl:(id)arg3 defaultPath:(id)arg4 withAnchor:(_Bool)arg5;
- (void)endParagraph;
- (void)addParagraph:(id)arg1;
- (id)editableTemplate;
- (id)simpleTemplate;
- (id)styles;
- (void)dealloc;
- (id)init;

@end

