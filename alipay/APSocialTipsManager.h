//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class APCustomStorage;
@protocol APSocialTipsDAOProxy;

@interface APSocialTipsManager : NSObject
{
    APCustomStorage *_storage;
    id <APSocialTipsDAOProxy> _proxy;
}

+ (id)shareInstance;
@property(readonly, nonatomic) id <APSocialTipsDAOProxy> proxy; // @synthesize proxy=_proxy;
@property(retain, nonatomic) APCustomStorage *storage; // @synthesize storage=_storage;
- (void).cxx_destruct;
- (id)daoInsertAPSocialTipsArr:(id)arg1;
- (id)daoSelectTipsModelsWithModels:(id)arg1;
- (id)daoUpdateAPSocialTips:(id)arg1;
- (id)daoDeleteAPSocialTipsFromSessionId:(id)arg1 toType:(id)arg2 bizType:(id)arg3;
- (id)daoIgnoreAPSocialTipsFromSessionId:(id)arg1;
- (id)daoSelectAPSocialTipsFromSessionId:(id)arg1 toType:(id)arg2 bizType:(id)arg3;
- (id)daoInsertAPSocialTips:(id)arg1;
- (id)daoSelectRecentTips;
- (id)init;
- (void)dealloc;

@end

