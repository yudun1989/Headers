//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GTXAttachmentFileMeta : NSObject
{
    int _sequence;
    int _status;
    long long _id;
    NSString *_filename;
    long long _createTime;
    long long _deleteTime;
    NSString *_md5;
}

+ (id)create:(id)arg1 sequence:(int)arg2;
@property(copy, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) long long deleteTime; // @synthesize deleteTime=_deleteTime;
@property(nonatomic) long long createTime; // @synthesize createTime=_createTime;
@property(nonatomic) int sequence; // @synthesize sequence=_sequence;
@property(copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(nonatomic) long long id; // @synthesize id=_id;
- (void).cxx_destruct;
- (id)init;

@end

