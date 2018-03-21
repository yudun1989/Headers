//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FLEXUtility : NSObject
{
}

+ (void)replaceImplementationOfSelector:(SEL)arg1 withSelector:(SEL)arg2 forClass:(Class)arg3 withMethodDescription:(struct objc_method_description)arg4 implementationBlock:(id)arg5 undefinedBlock:(id)arg6;
+ (void)replaceImplementationOfKnownSelector:(SEL)arg1 onClass:(Class)arg2 withBlock:(id)arg3 swizzledSelector:(SEL)arg4;
+ (_Bool)instanceRespondsButDoesNotImplementSelector:(SEL)arg1 class:(Class)arg2;
+ (SEL)swizzledSelectorForSelector:(SEL)arg1;
+ (id)inflatedDataFromCompressedData:(id)arg1;
+ (_Bool)isValidJSONData:(id)arg1;
+ (id)prettyJSONStringFromData:(id)arg1;
+ (id)dictionaryFromQuery:(id)arg1;
+ (id)statusCodeStringFromURLResponse:(id)arg1;
+ (id)stringFromRequestDuration:(double)arg1;
+ (id)thumbnailedImageWithMaxPixelDimension:(long long)arg1 fromImageData:(id)arg2;
+ (_Bool)isImagePathExtension:(id)arg1;
+ (id)searchBarPlaceholderText;
+ (unsigned long long)infoPlistSupportedInterfaceOrientationsMask;
+ (id)stringByEscapingHTMLEntitiesInString:(id)arg1;
+ (id)defaultTableViewCellLabelFont;
+ (id)defaultFontOfSize:(double)arg1;
+ (id)safeDescriptionForObject:(id)arg1;
+ (id)applicationName;
+ (id)applicationImageName;
+ (id)hierarchyIndentPatternColor;
+ (id)scrollViewGrayColor;
+ (id)circularImageWithColor:(id)arg1 radius:(double)arg2;
+ (id)detailDescriptionForView:(id)arg1;
+ (id)viewControllerForView:(id)arg1;
+ (id)stringForCGRect:(struct CGRect)arg1;
+ (id)descriptionForView:(id)arg1 includingFrame:(_Bool)arg2;
+ (id)consistentRandomColorForObject:(id)arg1;

@end

