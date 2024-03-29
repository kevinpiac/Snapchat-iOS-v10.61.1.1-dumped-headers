//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString, SCNetworkImage;

@interface SCSearchPersonStoryThumbnail : NSObject <NSCopying, NSCoding>
{
    _Bool _shouldShowReplayButton;
    _Bool _shouldShowLoadingSpinner;
    NSString *_username;
    SCNetworkImage *_thumbnailNetworkImage;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUsername:(id)arg1 thumbnailNetworkImage:(id)arg2 shouldShowReplayButton:(_Bool)arg3 shouldShowLoadingSpinner:(_Bool)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool shouldShowLoadingSpinner; // @synthesize shouldShowLoadingSpinner=_shouldShowLoadingSpinner;
@property(readonly, nonatomic) _Bool shouldShowReplayButton; // @synthesize shouldShowReplayButton=_shouldShowReplayButton;
@property(readonly, copy, nonatomic) SCNetworkImage *thumbnailNetworkImage; // @synthesize thumbnailNetworkImage=_thumbnailNetworkImage;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;

@end

