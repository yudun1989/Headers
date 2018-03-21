//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBViewController.h"

@class NSDictionary, TBSNSInteractLayerUrlQueryItem, TBSNSInteractLayerWebViewController, TBSNSInteractLayerWeexView, UIButton, UIImage, UIImageView, UIView;

@interface TBSNSInteractLayerViewController : TBViewController
{
    _Bool _isStatusBarHidden;
    long long _tbsnsStatusBarStyle;
    long long _contentType;
    TBSNSInteractLayerWebViewController *_webVC;
    TBSNSInteractLayerUrlQueryItem *_queryItem;
    NSDictionary *_queryDict;
    TBSNSInteractLayerWeexView *_weexView;
    UIImage *_bkImage;
    UIImageView *_bkImageView;
    UIView *_bkMask;
    UIView *_contentView;
    UIButton *_close;
    struct CGRect _startRect;
    struct CGRect _endRect;
}

+ (_Bool)tbNeedNavibar;
@property(nonatomic) _Bool isStatusBarHidden; // @synthesize isStatusBarHidden=_isStatusBarHidden;
@property(nonatomic) struct CGRect endRect; // @synthesize endRect=_endRect;
@property(nonatomic) struct CGRect startRect; // @synthesize startRect=_startRect;
@property(retain, nonatomic) UIButton *close; // @synthesize close=_close;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *bkMask; // @synthesize bkMask=_bkMask;
@property(retain, nonatomic) UIImageView *bkImageView; // @synthesize bkImageView=_bkImageView;
@property(retain, nonatomic) UIImage *bkImage; // @synthesize bkImage=_bkImage;
@property(retain, nonatomic) TBSNSInteractLayerWeexView *weexView; // @synthesize weexView=_weexView;
@property(retain, nonatomic) NSDictionary *queryDict; // @synthesize queryDict=_queryDict;
@property(retain, nonatomic) TBSNSInteractLayerUrlQueryItem *queryItem; // @synthesize queryItem=_queryItem;
@property(retain, nonatomic) TBSNSInteractLayerWebViewController *webVC; // @synthesize webVC=_webVC;
@property(nonatomic) long long contentType; // @synthesize contentType=_contentType;
@property(nonatomic) long long tbsnsStatusBarStyle; // @synthesize tbsnsStatusBarStyle=_tbsnsStatusBarStyle;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadWeex;
- (void)loadH5;
- (void)tapBk;
- (void)closeAnimation;
- (void)openAnimation;
- (void)calculateAnimationRect;
- (void)loadView;
- (_Bool)parseQuery:(id)arg1;
- (void)genBKImage;
- (void)dealloc;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

@end

