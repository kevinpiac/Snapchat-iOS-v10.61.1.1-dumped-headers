//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface SCChatMediaContentMetadata : NSObject <NSCopying, NSCoding>
{
    NSString *_mediaId;
    long long _mediaLoadState;
    long long _mediaUploadState;
}

- (void).cxx_destruct;
- (id)checkAndCorrectLoadStateWithCache:(id)arg1;
- (id)checkAndCorrectMediaStateWithCache:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaId:(id)arg1 mediaLoadState:(long long)arg2 mediaUploadState:(long long)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(readonly, nonatomic) long long mediaLoadState; // @synthesize mediaLoadState=_mediaLoadState;
@property(readonly, nonatomic) long long mediaUploadState; // @synthesize mediaUploadState=_mediaUploadState;

@end
