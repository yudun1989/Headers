//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, UIImage;

@interface KSTipViewItem : NSObject
{
    UIImage *_headerImage;
    NSURL *_headUrl;
    NSString *_title;
    NSString *_detail;
    NSString *_doneText;
    NSString *_cancelText;
    NSString *_otherText;
    long long _type;
    CDUnknownBlockType _onTapBtn;
}

+ (id)tipViewWithImage:(id)arg1 title:(id)arg2 detail:(id)arg3 doneText:(id)arg4 cancelText:(id)arg5 otherText:(id)arg6 type:(long long)arg7 onTapBtn:(CDUnknownBlockType)arg8;
+ (id)tipViewWithHeaderURL:(id)arg1 title:(id)arg2 detail:(id)arg3 doneText:(id)arg4 cancelText:(id)arg5 otherText:(id)arg6 type:(long long)arg7 onTapBtn:(CDUnknownBlockType)arg8;
@property(copy, nonatomic) CDUnknownBlockType onTapBtn; // @synthesize onTapBtn=_onTapBtn;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *otherText; // @synthesize otherText=_otherText;
@property(copy, nonatomic) NSString *cancelText; // @synthesize cancelText=_cancelText;
@property(copy, nonatomic) NSString *doneText; // @synthesize doneText=_doneText;
@property(copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSURL *headUrl; // @synthesize headUrl=_headUrl;
@property(retain, nonatomic) UIImage *headerImage; // @synthesize headerImage=_headerImage;
- (void).cxx_destruct;

@end

