//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableAttributedString, NSNumber, NSString;

@interface KSMessage : NSObject
{
    NSNumber *_from_id;
    NSString *_content;
    NSMutableAttributedString *_attributedContent;
    NSNumber *_urlEnabled;
    NSString *_from_name;
    NSNumber *_id;
    NSNumber *_status;
    NSNumber *_timestamp;
    NSDate *_date;
    NSString *_timeFromNow;
    NSNumber *_to_id;
    NSString *_to_name;
    NSNumber *_isError;
}

@property(retain, nonatomic) NSNumber *isError; // @synthesize isError=_isError;
@property(retain, nonatomic) NSString *to_name; // @synthesize to_name=_to_name;
@property(retain, nonatomic) NSNumber *to_id; // @synthesize to_id=_to_id;
@property(retain, nonatomic) NSString *timeFromNow; // @synthesize timeFromNow=_timeFromNow;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(retain, nonatomic) NSNumber *id; // @synthesize id=_id;
@property(retain, nonatomic) NSString *from_name; // @synthesize from_name=_from_name;
@property(retain, nonatomic) NSNumber *urlEnabled; // @synthesize urlEnabled=_urlEnabled;
@property(retain, nonatomic) NSMutableAttributedString *attributedContent; // @synthesize attributedContent=_attributedContent;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSNumber *from_id; // @synthesize from_id=_from_id;
- (void).cxx_destruct;

@end

