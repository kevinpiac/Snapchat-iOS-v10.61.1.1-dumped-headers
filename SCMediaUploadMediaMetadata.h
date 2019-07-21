//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSData, NSString, SCBoltContentObject;

@interface SCMediaUploadMediaMetadata : NSObject <NSCopying>
{
    NSString *_mediaId;
    long long _uploadState;
    NSData *_dataToUpload;
    SCBoltContentObject *_contentObject;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCBoltContentObject *contentObject; // @synthesize contentObject=_contentObject;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSData *dataToUpload; // @synthesize dataToUpload=_dataToUpload;
- (id)description;
- (unsigned long long)hash;
- (id)initWithMediaId:(id)arg1 uploadState:(long long)arg2 dataToUpload:(id)arg3 contentObject:(id)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(readonly, nonatomic) long long uploadState; // @synthesize uploadState=_uploadState;

@end
