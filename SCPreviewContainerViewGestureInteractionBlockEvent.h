//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCFeatureInteractionBlockEvent-Protocol.h"

@class UIGestureRecognizer;

@interface SCPreviewContainerViewGestureInteractionBlockEvent : NSObject <SCFeatureInteractionBlockEvent>
{
    UIGestureRecognizer *_gestureRecognizer;
}

+ (id)createWithGestureRecognizer:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
- (id)initWithGestureRecognizer:(id)arg1;
- (_Bool)shouldBlockEventForFeature:(id)arg1;

@end

