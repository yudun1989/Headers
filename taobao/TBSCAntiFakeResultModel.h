//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBSCAntiFakeResultModel : TBJSONModel
{
    NSString *_compatibleLink;
    NSString *_trust;
    NSString *_scanCount;
    NSString *_certificationInfo;
    NSString *_h5Url;
}

@property(retain, nonatomic) NSString *h5Url; // @synthesize h5Url=_h5Url;
@property(retain, nonatomic) NSString *certificationInfo; // @synthesize certificationInfo=_certificationInfo;
@property(retain, nonatomic) NSString *scanCount; // @synthesize scanCount=_scanCount;
@property(retain, nonatomic) NSString *trust; // @synthesize trust=_trust;
@property(retain, nonatomic) NSString *compatibleLink; // @synthesize compatibleLink=_compatibleLink;
- (void).cxx_destruct;

@end

