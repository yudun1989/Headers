//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KOBaseContext.h"

@interface KOFriendContext : KOBaseContext
{
    _Bool _secureResource;
    long long _serviceType;
    long long _filterType;
    long long _limit;
    long long _orderType;
    long long _ordering;
}

+ (id)contextWithServiceType:(long long)arg1 filterType:(long long)arg2 secureResource:(_Bool)arg3 limit:(long long)arg4 orderType:(long long)arg5 ordering:(long long)arg6;
+ (id)contextWithServiceType:(long long)arg1 filterType:(long long)arg2 limit:(long long)arg3;
+ (id)contextWithServiceType:(long long)arg1 filterType:(long long)arg2;
@property(readonly, nonatomic) long long ordering; // @synthesize ordering=_ordering;
@property(readonly, nonatomic) long long orderType; // @synthesize orderType=_orderType;
@property(readonly, nonatomic) long long limit; // @synthesize limit=_limit;
@property(readonly, nonatomic) _Bool secureResource; // @synthesize secureResource=_secureResource;
@property(readonly, nonatomic) long long filterType; // @synthesize filterType=_filterType;
@property(readonly, nonatomic) long long serviceType; // @synthesize serviceType=_serviceType;
- (id)initWithServiceType:(long long)arg1 filterType:(long long)arg2 secureResource:(_Bool)arg3 limit:(long long)arg4 orderType:(long long)arg5 ordering:(long long)arg6;

@end

