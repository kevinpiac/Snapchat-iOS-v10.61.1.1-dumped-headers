//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "SCComposerJsConvertible-Protocol.h"

@class NSString;

@interface SCProfileAttachmentsContext : NSObject <SCComposerJsConvertible, NSCopying>
{
    CDUnknownBlockType _onAttachmentTap;
    CDUnknownBlockType _onAttachmentLongPress;
    CDUnknownBlockType _onFirstAttachmentsLoad;
    CDUnknownBlockType _onAttachmentLoadMore;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOnAttachmentTap:(CDUnknownBlockType)arg1 onAttachmentLongPress:(CDUnknownBlockType)arg2 onFirstAttachmentsLoad:(CDUnknownBlockType)arg3 onAttachmentLoadMore:(CDUnknownBlockType)arg4;
@property(copy, nonatomic) CDUnknownBlockType onAttachmentLoadMore; // @synthesize onAttachmentLoadMore=_onAttachmentLoadMore;
@property(copy, nonatomic) CDUnknownBlockType onAttachmentLongPress; // @synthesize onAttachmentLongPress=_onAttachmentLongPress;
@property(copy, nonatomic) CDUnknownBlockType onAttachmentTap; // @synthesize onAttachmentTap=_onAttachmentTap;
@property(copy, nonatomic) CDUnknownBlockType onFirstAttachmentsLoad; // @synthesize onFirstAttachmentsLoad=_onFirstAttachmentsLoad;
- (id)toJavaScript;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
