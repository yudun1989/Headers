//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface ComicScreenshotUploadInfo : NSObject
{
    NSString *_comicId;
    NSString *_actionData;
    NSString *_md5;
    NSString *_filePath;
}

@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(copy, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(copy, nonatomic) NSString *actionData; // @synthesize actionData=_actionData;
@property(copy, nonatomic) NSString *comicId; // @synthesize comicId=_comicId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithMd5:(id)arg1 filePath:(id)arg2 actionData:(id)arg3 comicId:(id)arg4;

@end

