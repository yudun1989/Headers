//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSDictionary, UIImageView, UIScrollView, UIView;

@interface MQPSharePayQRCodeVC : UIViewController
{
    _Bool _isCompact;
    CDUnknownBlockType _cancelBlock;
    NSDictionary *_rawDataSource;
    UIScrollView *_contentView;
    UIImageView *_userIcon;
    UIView *_containerView;
}

@property(nonatomic) _Bool isCompact; // @synthesize isCompact=_isCompact;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak UIImageView *userIcon; // @synthesize userIcon=_userIcon;
@property(nonatomic) __weak UIScrollView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSDictionary *rawDataSource; // @synthesize rawDataSource=_rawDataSource;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
- (void).cxx_destruct;
- (void)fetchImage;
- (void)createUserView;
- (void)createCodeView;
- (void)createContainerView;
- (void)createContentView;
- (void)createNaviBar;
- (void)doClickNaviLeftAction:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (id)initWithDataSource:(id)arg1;

@end

