//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface JDKeplerUpdateItemModel : NSObject
{
    NSString *_md5;
    NSNumber *_updateTime;
    NSString *_url;
    NSString *_version;
    NSString *_targetUrl;
    NSString *_mime;
    NSString *_encoding;
}

@property(copy, nonatomic) NSString *encoding; // @synthesize encoding=_encoding;
@property(copy, nonatomic) NSString *mime; // @synthesize mime=_mime;
@property(copy, nonatomic) NSString *targetUrl; // @synthesize targetUrl=_targetUrl;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSNumber *updateTime; // @synthesize updateTime=_updateTime;
@property(copy, nonatomic) NSString *md5; // @synthesize md5=_md5;
- (void).cxx_destruct;
- (void)startWriteAtFilePath:(id)arg1;
- (void)saveAtFilePath:(id)arg1;
- (id)localStaticPath;
- (void)saveInKeplerFilePath;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDict:(id)arg1;

@end

