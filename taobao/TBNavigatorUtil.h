//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TBNavigatorUtil : NSObject
{
}

+ (void)assertDebug:(_Bool)arg1 showAlert:(id)arg2 message:(id)arg3;
+ (_Bool)dynamicGetDebugModeSwitch;
+ (id)noNullString:(id)arg1;
+ (_Bool)isNoOpenNewWebView:(id)arg1;
+ (id)updateDictForUsertrackWithRequest:(id)arg1 urlResponse:(id)arg2;
+ (_Bool)hasUppercaseLetter:(id)arg1;
+ (_Bool)isInnerAppScheme:(id)arg1;
+ (id)getAllInnerAppScheme;
+ (_Bool)isWebviewController:(id)arg1;
+ (id)urlString:(id)arg1 addKey:(id)arg2 addValue:(id)arg3;
+ (id)url:(id)arg1 changeToScheme:(id)arg2;
+ (id)getOriginalParamFromRequestQuery:(id)arg1;

@end

