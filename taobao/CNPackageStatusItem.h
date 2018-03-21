//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface CNPackageStatusItem : TBJSONModel
{
    NSString *_newStatusDesc;
    NSString *_newStatusCode;
    NSString *_statusCode;
    NSString *_status;
    NSString *_desc;
    NSString *_progressbar;
    NSString *_departureName;
    NSString *_destinationName;
}

@property(retain, nonatomic) NSString *destinationName; // @synthesize destinationName=_destinationName;
@property(retain, nonatomic) NSString *departureName; // @synthesize departureName=_departureName;
@property(retain, nonatomic) NSString *progressbar; // @synthesize progressbar=_progressbar;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *statusCode; // @synthesize statusCode=_statusCode;
@property(copy, nonatomic, getter=statusCodeNew) NSString *newStatusCode; // @synthesize newStatusCode=_newStatusCode;
@property(copy, nonatomic, getter=statusDescNew) NSString *newStatusDesc; // @synthesize newStatusDesc=_newStatusDesc;
- (void).cxx_destruct;

@end

