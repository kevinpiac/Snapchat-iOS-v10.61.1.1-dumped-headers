//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;

@interface SCTV3FullscreenUpdateDraggingConstraintsInfo : NSObject
{
    _Bool _pendingUpdate;
    UIView *_anchor;
    struct CGRect _rect;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *anchor; // @synthesize anchor=_anchor;
- (id)initWithAnchorView:(id)arg1 rect:(struct CGRect)arg2;
@property(nonatomic) _Bool pendingUpdate; // @synthesize pendingUpdate=_pendingUpdate;
@property(readonly, nonatomic) struct CGRect rect; // @synthesize rect=_rect;

@end

