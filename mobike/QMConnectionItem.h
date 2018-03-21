//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSError, NSMutableData, NSString, NSURLConnection;
@protocol QMConnectionItemDelegate;

@interface QMConnectionItem : NSObject
{
    int cmd_;
    NSString *urlString_;
    id context_;
    int timeout_;
    NSData *dataHttpPost_;
    _Bool gzipInHttpHeader_;
    _Bool noCache_;
    NSString *encodingType_;
    NSMutableData *responseData_;
    NSURLConnection *connection_;
    int iVersion_;
    NSError *error_;
    id <QMConnectionItemDelegate> _delegate;
}

+ (id)itemWithCmd:(int)arg1 URL:(id)arg2 delegate:(id)arg3 context:(id)arg4;
+ (id)itemWithCmd:(int)arg1 URL:(id)arg2 delegate:(id)arg3 context:(id)arg4 noCache:(_Bool)arg5;
@property(nonatomic) __weak id <QMConnectionItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int iVersion; // @synthesize iVersion=iVersion_;
@property(retain, nonatomic) NSError *error; // @synthesize error=error_;
@property(nonatomic) _Bool noCache; // @synthesize noCache=noCache_;
@property(nonatomic) _Bool gzipInHttpHeader; // @synthesize gzipInHttpHeader=gzipInHttpHeader_;
@property(retain, nonatomic) NSData *dataHttpPost; // @synthesize dataHttpPost=dataHttpPost_;
@property(retain, nonatomic) id context; // @synthesize context=context_;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=connection_;
@property(retain, nonatomic) NSMutableData *responseData; // @synthesize responseData=responseData_;
@property(copy, nonatomic) NSString *encodingType; // @synthesize encodingType=encodingType_;
@property(nonatomic) int timeout; // @synthesize timeout=timeout_;
@property(copy, nonatomic) NSString *urlString; // @synthesize urlString=urlString_;
@property(nonatomic) int cmd; // @synthesize cmd=cmd_;
- (void).cxx_destruct;
- (id)responseString:(_Bool)arg1;
- (id)init;

@end

