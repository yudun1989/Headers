//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/NSCoding-Protocol.h>

@class CIFilter, CIImage, NSArray, NSMutableDictionary, NSString;
@protocol TBFilterDelegate;

@interface TBFilter : NSObject <NSCoding>
{
    NSMutableDictionary *_unwrappedValues;
    _Bool _enabled;
    CIFilter *_CIFilter;
    NSString *_name;
    id <TBFilterDelegate> _delegate;
    CIImage *_maskImage;
}

+ (char *)createRGBABitmapFromImage:(struct CGImage *)arg1;
+ (id)colorCubeDataWithCGImage:(struct CGImage *)arg1 dimension:(long long)arg2;
+ (_Bool)data:(id)arg1 hasMagic:(unsigned int)arg2;
+ (id)filterWithData:(id)arg1;
+ (id)filterWithData:(id)arg1 error:(id *)arg2;
+ (id)filterWithCIFilterName:(id)arg1;
+ (id)filterWithCIFilter:(id)arg1;
+ (id)emptyFilter;
+ (id)pixelImage:(id)arg1 withMaskImage:(id)arg2;
+ (id)pixelImage:(id)arg1 withMaskImage:(id)arg2 isSave:(_Bool)arg3;
@property(retain, nonatomic) CIImage *maskImage; // @synthesize maskImage=_maskImage;
@property(nonatomic) __weak id <TBFilterDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) CIFilter *CIFilter; // @synthesize CIFilter=_CIFilter;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *animations;
@property(readonly, nonatomic) _Bool isEmpty;
- (id)imageByProcessingImage:(id)arg1 atTime:(double)arg2 isSave:(_Bool)arg3;
- (id)imageByProcessingImage:(id)arg1;
- (void)addSubFilter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setParameterValue:(id)arg1 forKey:(id)arg2;
- (void)_didChangeParameter:(id)arg1;
- (id)_wrappedValue:(id)arg1 forKey:(id)arg2;
- (id)_unwrappedValue:(id)arg1 forKey:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCIFilter:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

