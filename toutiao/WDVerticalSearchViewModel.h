//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface WDVerticalSearchViewModel : NSObject
{
    _Bool _has_privilege;
    _Bool _isSuggetionLoading;
    NSDictionary *_gdExtJson;
    NSDictionary *_apiParameter;
    NSArray *_suggestionArray;
    NSString *_requestTitle;
}

+ (id)ABTestClient;
+ (id)_deviceID;
+ (id)_installID;
+ (id)commonHeaderDictionaryWithSupportedMix:(_Bool)arg1;
+ (id)customURLStringFromString:(id)arg1;
+ (id)customURLStringFromString:(id)arg1 supportedMix:(_Bool)arg2;
+ (id)constructURLStringFrom:(id)arg1 getParameter:(id)arg2;
+ (id)suggetionModelsWithStructModels:(id)arg1;
+ (void)requestForQuestionTitle:(id)arg1 apiParameter:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
+ (void)requestForAskPrivilegeApiParameter:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) _Bool isSuggetionLoading; // @synthesize isSuggetionLoading=_isSuggetionLoading;
@property(copy, nonatomic) NSString *requestTitle; // @synthesize requestTitle=_requestTitle;
@property(copy, nonatomic) NSArray *suggestionArray; // @synthesize suggestionArray=_suggestionArray;
@property(nonatomic) _Bool has_privilege; // @synthesize has_privilege=_has_privilege;
@property(copy, nonatomic) NSDictionary *apiParameter; // @synthesize apiParameter=_apiParameter;
@property(copy, nonatomic) NSDictionary *gdExtJson; // @synthesize gdExtJson=_gdExtJson;
- (void).cxx_destruct;
- (unsigned long long)cellCount;
- (void)enterPostPage;
- (void)requestForQuestionTitle:(id)arg1 finishBlock:(CDUnknownBlockType)arg2 force:(_Bool)arg3;
- (void)requestForAskPrivilegeFinishBlock:(CDUnknownBlockType)arg1;
- (id)initWithGdExtJson:(id)arg1 apiParameter:(id)arg2;

@end

