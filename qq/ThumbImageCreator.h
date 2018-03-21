//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface ThumbImageCreator : NSObject
{
    NSMutableArray *_thumbArray;
    _Bool _bCreateingThumb;
    id _delegate;
}

+ (id)getInstance;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)adjustThumbImage:(id)arg1 sourcePath:(id)arg2 size:(struct CGSize)arg3;
- (id)scaleImageToThumbnail:(id)arg1;
- (id)createThumbImageActual:(id)arg1 md5:(id)arg2;
- (void)createThumbImagelAsync:(id)arg1;
- (void)executeNextTask;
- (void)addCreateThumbImageTask:(id)arg1 md5:(id)arg2;
- (id)getThumbFolder;
- (id)getThumbImagePath:(id)arg1 md5:(id)arg2;

@end

