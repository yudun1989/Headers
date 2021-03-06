//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKBaseViewController.h"

@class NSString, UIButton, UILabel, UIView, WKWebView;

@interface MBKUserProtocolViewController : MBKBaseViewController
{
    NSString *_contentUrl;
    long long _contractType;
    NSString *_protocolTitle;
    UIView *_topView;
    UILabel *_titleLabel;
    UIView *_bottomView;
    UIButton *_leftButton;
    UIButton *_rightButton;
    WKWebView *_contentView;
}

@property(retain, nonatomic) WKWebView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) NSString *protocolTitle; // @synthesize protocolTitle=_protocolTitle;
@property(nonatomic) long long contractType; // @synthesize contractType=_contractType;
@property(retain, nonatomic) NSString *contentUrl; // @synthesize contentUrl=_contentUrl;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)disagreeButtonClicked:(id)arg1;
- (void)agreeButtonClicked:(id)arg1;
- (void)setUpViews;
- (void)viewDidLoad;
- (id)init;

@end

