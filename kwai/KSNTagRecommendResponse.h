//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSUPageResponse.h"

@class NSArray, NSString;

@interface KSNTagRecommendResponse : KSUPageResponse
{
    NSArray *_tags;
    NSString *_llsid;
}

+ (id)mj_objectClassInArray;
@property(retain, nonatomic) NSString *llsid; // @synthesize llsid=_llsid;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
- (void).cxx_destruct;
- (void)mj_keyValuesDidFinishConvertingToObject;
- (id)objects;
- (id)init;

@end

