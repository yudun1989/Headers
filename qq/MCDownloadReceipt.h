//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/NSCoding-Protocol.h>

@class NSDate, NSError, NSOutputStream, NSProgress, NSString;

@interface MCDownloadReceipt : NSObject <NSCoding>
{
    unsigned long long _state;
    NSString *_url;
    NSString *_speed;
    long long _totalBytesExpectedToWrite;
    NSError *_error;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
    CDUnknownBlockType _progressBlock;
    NSString *_filePath;
    NSString *_filename;
    NSString *_truename;
    long long _totalBytesWritten;
    NSProgress *_progress;
    NSOutputStream *_stream;
    unsigned long long _totalRead;
    NSDate *_date;
}

@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) unsigned long long totalRead; // @synthesize totalRead=_totalRead;
@property(retain, nonatomic) NSOutputStream *stream; // @synthesize stream=_stream;
@property(copy, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(nonatomic) long long totalBytesWritten; // @synthesize totalBytesWritten=_totalBytesWritten;
@property(copy, nonatomic) NSString *truename; // @synthesize truename=_truename;
@property(copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) long long totalBytesExpectedToWrite; // @synthesize totalBytesExpectedToWrite=_totalBytesExpectedToWrite;
@property(copy, nonatomic) NSString *speed; // @synthesize speed=_speed;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;

@end

