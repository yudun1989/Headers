//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCardBaseViewController.h"

@class NSString;

@interface LifeCardViewController : CCardBaseViewController
{
    NSString *_publicId;
}

@property(retain, nonatomic) NSString *publicId; // @synthesize publicId=_publicId;
- (void).cxx_destruct;
- (id)pageType;
- (id)complainSubScene;
- (_Bool)handleNativeEvent:(id)arg1 target:(id)arg2;
- (void)loadMoreCardWithList:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)refreshCardWithList:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)removeNotify;
- (void)setupNotify;
- (void)setupUI;
- (id)functionHook;
- (void)viewWillDestroy;
- (id)logBizs;

@end

