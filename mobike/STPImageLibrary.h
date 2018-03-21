//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface STPImageLibrary : NSObject
{
}

+ (id)safeImageNamed:(id)arg1;
+ (id)errorImageForCardBrand:(long long)arg1;
+ (id)cvcImageForCardBrand:(long long)arg1;
+ (id)templatedBrandImageForCardBrand:(long long)arg1;
+ (id)brandImageForCardBrand:(long long)arg1;
+ (id)unknownCardCardImage;
+ (id)visaCardImage;
+ (id)masterCardCardImage;
+ (id)jcbCardImage;
+ (id)discoverCardImage;
+ (id)dinersClubCardImage;
+ (id)amexCardImage;
+ (id)applePayCardImage;
+ (id)paddedImageWithInsets:(struct UIEdgeInsets)arg1 forImage:(id)arg2;
+ (id)imageWithTintColor:(id)arg1 forImage:(id)arg2;
+ (id)brandImageForCardBrand:(long long)arg1 template:(_Bool)arg2;
+ (id)safeImageNamed:(id)arg1 templateIfAvailable:(_Bool)arg2;
+ (id)largeShippingImage;
+ (id)largeCardBackImage;
+ (id)largeCardFrontImage;
+ (id)checkmarkIcon;
+ (id)smallRightChevronIcon;
+ (id)leftChevronIcon;
+ (id)addIcon;

@end

