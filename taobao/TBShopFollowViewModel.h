//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBShopHighLevelViewModel.h"

@class TBFollowSDKModule, TBShopHeaderRelationSuite;

@interface TBShopFollowViewModel : TBShopHighLevelViewModel
{
    TBFollowSDKModule *_followModule;
    TBShopHeaderRelationSuite *_relation;
}

@property(retain, nonatomic) TBShopHeaderRelationSuite *relation; // @synthesize relation=_relation;
@property(retain, nonatomic) TBFollowSDKModule *followModule; // @synthesize followModule=_followModule;
- (void).cxx_destruct;
- (id)generateFollowParams;
- (void)socailFollowStateDidChange:(id)arg1;
- (id)generateView;
- (void)constrcutWithModel:(id)arg1;
- (void)dealloc;
- (id)initWithModel:(id)arg1;

@end

