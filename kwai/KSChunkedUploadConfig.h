//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface KSChunkedUploadConfig : NSObject
{
    _Bool _partFileUploadOn;
    _Bool _dataNetOn;
    _Bool _partFileUploadFirst;
    long long _threshold;
    long long _maxThread;
    long long _uploadRetryCount;
}

@property(nonatomic) long long uploadRetryCount; // @synthesize uploadRetryCount=_uploadRetryCount;
@property(nonatomic) _Bool partFileUploadFirst; // @synthesize partFileUploadFirst=_partFileUploadFirst;
@property(nonatomic) long long maxThread; // @synthesize maxThread=_maxThread;
@property(nonatomic) _Bool dataNetOn; // @synthesize dataNetOn=_dataNetOn;
@property(nonatomic) _Bool partFileUploadOn; // @synthesize partFileUploadOn=_partFileUploadOn;
@property(nonatomic) long long threshold; // @synthesize threshold=_threshold;
- (id)init;

@end

