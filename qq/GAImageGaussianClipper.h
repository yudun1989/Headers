//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZImageClipperBase.h>

@interface GAImageGaussianClipper : QZImageClipperBase
{
    unsigned long long _gaussianRadius;
}

@property(nonatomic) unsigned long long gaussianRadius; // @synthesize gaussianRadius=_gaussianRadius;
- (id)doClipImage:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)shouldClip;
- (id)initWithViewSize:(struct CGSize)arg1;

@end

