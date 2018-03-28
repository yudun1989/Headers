//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface TTImageInfosModel : NSObject <NSCoding>
{
    NSString *_URI;
    double _width;
    double _height;
    NSArray *_urlWithHeader;
    NSDictionary *_userInfo;
    unsigned long long _imageType;
    unsigned long long _imageFileType;
    NSString *_openURL;
    NSDictionary *_originalDict;
}

+ (_Bool)isImageInfosModel:(id)arg1 equalesToModel:(id)arg2;
+ (id)dictionaryWithImageUrlList:(id)arg1;
+ (id)genNSArrayWithTTImageInfosModel:(id)arg1;
+ (id)genImageInfosModelWithNSArray:(id)arg1;
@property(copy, nonatomic) NSDictionary *originalDict; // @synthesize originalDict=_originalDict;
@property(copy, nonatomic) NSString *openURL; // @synthesize openURL=_openURL;
@property(nonatomic) unsigned long long imageFileType; // @synthesize imageFileType=_imageFileType;
@property(nonatomic) unsigned long long imageType; // @synthesize imageType=_imageType;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSArray *urlWithHeader; // @synthesize urlWithHeader=_urlWithHeader;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(copy, nonatomic) NSString *URI; // @synthesize URI=_URI;
- (void).cxx_destruct;
- (id)description;
- (id)urlStringAtIndex:(unsigned long long)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 withHeader:(id)arg2;
- (id)initWithURL:(id)arg1 withHeader:(id)arg2 withWidth:(double)arg3 withHeight:(double)arg4 withURI:(id)arg5;
- (id)initWithURLAndHeader:(id)arg1 withWidth:(double)arg2 withHeight:(double)arg3 withURI:(id)arg4 openURL:(id)arg5;
- (id)initWithDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithImageUrlList:(id)arg1;

@end

