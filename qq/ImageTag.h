//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface ImageTag : NSObject
{
    int _tagConfidence;
    float _tagConfidence_f;
    int _cdb_errorcode;
    NSString *_imageId;
    NSString *_tagName;
    const char *_cdb_res;
    NSString *_xml;
}

@property(retain, nonatomic) NSString *xml; // @synthesize xml=_xml;
@property(nonatomic) const char *cdb_res; // @synthesize cdb_res=_cdb_res;
@property(nonatomic) int cdb_errorcode; // @synthesize cdb_errorcode=_cdb_errorcode;
@property(nonatomic) float tagConfidence_f; // @synthesize tagConfidence_f=_tagConfidence_f;
@property(nonatomic) int tagConfidence; // @synthesize tagConfidence=_tagConfidence;
@property(retain, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
@property(retain, nonatomic) NSString *imageId; // @synthesize imageId=_imageId;
- (void).cxx_destruct;
- (void)dealloc;
- (void)printLog;

@end

