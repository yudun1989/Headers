//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TLProfileModel, TLSceneOperationWidgetBtn, UIImageView;

@interface TLSceneTitleView : UIView
{
    CDUnknownBlockType _exitTitleBlock;
    TLProfileModel *_profileModel;
    UIImageView *_profileHeadImgView;
    UIImageView *_profileGenderImgView;
    TLSceneOperationWidgetBtn *_exitWidget;
}

+ (id)sceneTitleView;
@property(retain, nonatomic) TLSceneOperationWidgetBtn *exitWidget; // @synthesize exitWidget=_exitWidget;
@property(retain, nonatomic) UIImageView *profileGenderImgView; // @synthesize profileGenderImgView=_profileGenderImgView;
@property(retain, nonatomic) UIImageView *profileHeadImgView; // @synthesize profileHeadImgView=_profileHeadImgView;
@property(retain, nonatomic) TLProfileModel *profileModel; // @synthesize profileModel=_profileModel;
@property(copy, nonatomic) CDUnknownBlockType exitTitleBlock; // @synthesize exitTitleBlock=_exitTitleBlock;
- (void).cxx_destruct;
- (void)exitScene;
- (void)buildExitWidget;
- (void)buildProfile;
- (void)buildTitleView;
- (id)mProfileModel;
- (void)reloadWithFeed:(id)arg1;
- (void)dealloc;

@end

