//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssetsLibrary/ALAsset.h>

@interface ALAsset (BeeGifSupport)
+ (float)bee_frameDurationAtIndex:(unsigned long long)arg1 source:(struct CGImageSource *)arg2;
+ (id)bee_convertGIFImageFromData:(id)arg1;
- (id)bee_animatedGIFImage;
- (id)bee_gifData;
@end

