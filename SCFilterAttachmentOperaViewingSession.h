//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, SCUnlockableGeoFilterTracker, SOJUUnlockablesAttachment;

@interface SCFilterAttachmentOperaViewingSession : NSObject
{
    SOJUUnlockablesAttachment *_attachment;
    NSString *_filterId;
    SCUnlockableGeoFilterTracker *_geofilterTracker;
    NSDate *_attachmentOpenTimestamp;
    double _attachmentViewOpened;
    double _durationInAttachmentView;
    _Bool _isAttachmentOpen;
}

- (void).cxx_destruct;
- (void)_logGeofilterAttachmentView;
- (void)_trackUnlockableAttachmentView;
- (void)closeAttachment;
- (id)initWithAttachment:(id)arg1 filterId:(id)arg2 geofilterTracker:(id)arg3;
- (void)openAttachment;

@end
