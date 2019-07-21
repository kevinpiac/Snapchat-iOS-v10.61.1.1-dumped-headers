//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTableIndexConfiguration-Protocol.h"

@class NSString, UIColor;

@interface SCGalleryTableIndexConfiguration : NSObject <SCTableIndexConfiguration>
{
}

@property(readonly, nonatomic) UIColor *scrollBarBackgroundColor;
@property(readonly, nonatomic) UIColor *scrollBarColor;
@property(readonly, nonatomic) double scrollBarFastScrollingMinimumWidth;
@property(readonly, nonatomic) UIColor *scrollBarLabelTextColor;
@property(readonly, nonatomic) double scrollBarPressedWidth;
@property(readonly, nonatomic) _Bool supportsRTL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UIColor *transitionScrollBarColor;

@end

