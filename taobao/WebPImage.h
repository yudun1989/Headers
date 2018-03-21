//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface WebPImage : NSObject
{
    NSString *filePath_;
    NSString *name_;
    UIImage *thumbImage_;
    UIImage *fullImage_;
}

+ (id)loadWebPFromData:(id)arg1 scaledWidth:(int)arg2 scaledHeight:(int)arg3;
+ (id)loadWebPFromFile:(id)arg1 scaledWidth:(int)arg2 scaledHeight:(int)arg3;
+ (id)loadWebPFromData:(id)arg1;
+ (id)loadWebPFromFile:(id)arg1;
+ (id)decodeWebPFromData:(id)arg1 withConfig:(struct WebPDecoderConfig *)arg2;
+ (_Bool)isWebpData:(id)arg1;
+ (id)decodeWebPFromFile:(id)arg1 withConfig:(struct WebPDecoderConfig *)arg2;
@property(retain, nonatomic) UIImage *fullImage; // @synthesize fullImage=fullImage_;
@property(retain, nonatomic) UIImage *thumbImage; // @synthesize thumbImage=thumbImage_;
@property(copy, nonatomic) NSString *name; // @synthesize name=name_;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=filePath_;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initFromFile:(id)arg1;

@end

