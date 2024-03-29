//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCConversationBroadcastSnapInfo : NSObject <NSCopying>
{
    _Bool _hideTimer;
    NSString *_mediaUrl;
    NSString *_url;
    NSString *_actionText;
    NSString *_secondaryText;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *actionText; // @synthesize actionText=_actionText;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) _Bool hideTimer; // @synthesize hideTimer=_hideTimer;
- (id)initWithMediaUrl:(id)arg1 url:(id)arg2 actionText:(id)arg3 secondaryText:(id)arg4 hideTimer:(_Bool)arg5;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *mediaUrl; // @synthesize mediaUrl=_mediaUrl;
@property(readonly, copy, nonatomic) NSString *secondaryText; // @synthesize secondaryText=_secondaryText;
@property(readonly, copy, nonatomic) NSString *url; // @synthesize url=_url;

@end

