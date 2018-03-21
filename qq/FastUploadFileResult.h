//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/NSCoding-Protocol.h>

@class FileInfo, NSString, UploadFileInfo;

@interface FastUploadFileResult : NSObject <NSCoding>
{
    int _result;
    FileInfo *_file_info;
    UploadFileInfo *_upload_file_info;
    int _retransmission;
    NSString *_fail_tips;
    int _xo;
}

- (void)decodeWithProto:(void *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileInfo:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(copy, nonatomic) NSString *fail_tips; // @dynamic fail_tips;
@property(retain, nonatomic) FileInfo *file_info; // @dynamic file_info;
@property(nonatomic) int result; // @dynamic result;
@property(nonatomic) int retransmission; // @dynamic retransmission;
@property(retain, nonatomic) UploadFileInfo *upload_file_info; // @dynamic upload_file_info;

@end
