//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSUPageResponse.h"

@class NSArray, NSString;

@interface KSSearchTagResponse : KSUPageResponse
{
    NSArray *_banners;
    NSString *_ussid;
}

+ (id)mj_objectClassInArray;
+ (id)mj_replacedKeyFromPropertyName;
@property(retain, nonatomic) NSString *ussid; // @synthesize ussid=_ussid;
@property(retain, nonatomic) NSArray *banners; // @synthesize banners=_banners;
- (void).cxx_destruct;
- (_Bool)isMusicWithDic:(id)arg1;
- (_Bool)isTagWithDic:(id)arg1;
- (id)mj_newValueFromOldValue:(id)arg1 property:(id)arg2;
- (id)tags;

@end

