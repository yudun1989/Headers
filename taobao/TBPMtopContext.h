//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface TBPMtopContext : NSObject
{
    _Bool _isNeedEncode;
    _Bool _useHttps;
    _Bool _useHttpPost;
    NSString *_api;
    NSString *_version;
    NSDictionary *_parameters;
}

+ (id)mtopWithApi:(id)arg1 version:(id)arg2;
@property(retain, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(nonatomic) _Bool useHttpPost; // @synthesize useHttpPost=_useHttpPost;
@property(nonatomic) _Bool useHttps; // @synthesize useHttps=_useHttps;
@property(nonatomic) _Bool isNeedEncode; // @synthesize isNeedEncode=_isNeedEncode;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *api; // @synthesize api=_api;
- (void).cxx_destruct;

@end

