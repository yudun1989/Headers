//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface WDClassifySearchListViewModel : NSObject
{
    _Bool _has_privilege;
    NSDictionary *_gdExtJson;
    NSDictionary *_apiParameter;
    NSString *_concernID;
    NSArray *_tagList;
}

@property(readonly, copy, nonatomic) NSArray *tagList; // @synthesize tagList=_tagList;
@property(readonly, copy, nonatomic) NSString *concernID; // @synthesize concernID=_concernID;
@property(readonly, nonatomic) _Bool has_privilege; // @synthesize has_privilege=_has_privilege;
@property(copy, nonatomic) NSDictionary *apiParameter; // @synthesize apiParameter=_apiParameter;
@property(copy, nonatomic) NSDictionary *gdExtJson; // @synthesize gdExtJson=_gdExtJson;
- (void).cxx_destruct;
- (id)wendaCategoryPlaceHolder;
- (id)initWithGdExtJson:(id)arg1 apiParameter:(id)arg2;

@end

