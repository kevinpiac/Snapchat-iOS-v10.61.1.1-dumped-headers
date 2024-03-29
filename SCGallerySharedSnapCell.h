//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCGalleryBaseStorySnapCell.h"

#import "SCGalleryEntrySyncStatusGeneratorDelegate-Protocol.h"

@class NSString;

@interface SCGallerySharedSnapCell : SCGalleryBaseStorySnapCell <SCGalleryEntrySyncStatusGeneratorDelegate>
{
    _Bool _selected;
    _Bool _selectMode;
}

- (void)animateLongTapForTouchLocation:(struct CGPoint)arg1 reverse:(_Bool)arg2;
- (_Bool)canSelectAtPoint:(struct CGPoint)arg1;
- (void)entrySyncStatusGenerator:(id)arg1 didUpdateStatus:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (unsigned long long)interactionMode;
- (void)prepareForReuse;
- (void)setSelectMode:(_Bool)arg1;
- (id)sourceViewForOpera;
- (void)updateUI;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

