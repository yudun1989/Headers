//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface __NSURLHttpConnectionFileData : NSObject
{
    NSData *_fileData;
    NSString *_filename;
    NSString *_contentType;
    NSString *_theKey;
}

@property(copy, nonatomic) NSString *theKey; // @synthesize theKey=_theKey;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(retain, nonatomic) NSData *fileData; // @synthesize fileData=_fileData;
- (void).cxx_destruct;

@end

