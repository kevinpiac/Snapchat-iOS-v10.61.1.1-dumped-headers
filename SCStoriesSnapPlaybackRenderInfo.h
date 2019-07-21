//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCStoriesSnapPlaybackFramingInfo;

@interface SCStoriesSnapPlaybackRenderInfo : NSObject <NSCopying>
{
    NSString *_attachmentUrl;
    SCStoriesSnapPlaybackFramingInfo *_framing;
    NSString *_captionText;
    NSString *_comment;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *attachmentUrl; // @synthesize attachmentUrl=_attachmentUrl;
@property(readonly, copy, nonatomic) NSString *captionText; // @synthesize captionText=_captionText;
@property(readonly, copy, nonatomic) NSString *comment; // @synthesize comment=_comment;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) SCStoriesSnapPlaybackFramingInfo *framing; // @synthesize framing=_framing;
- (unsigned long long)hash;
- (id)initWithAttachmentUrl:(id)arg1 framing:(id)arg2 captionText:(id)arg3 comment:(id)arg4;
- (_Bool)isEqual:(id)arg1;

@end

