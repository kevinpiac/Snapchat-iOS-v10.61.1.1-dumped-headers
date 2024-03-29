//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class CLLocation, NSArray, NSString;

@interface SCSearchPivotInfo : NSObject <NSCopying, NSCoding>
{
    NSArray *_snapLabels;
    CLLocation *_pivotLocation;
    NSArray *_attachedStoryIds;
    NSString *_snapCaption;
    NSString *_venueId;
    NSString *_geoFilterId;
    NSArray *_entities;
    NSString *_originStoryId;
    NSString *_webAttachmentURL;
    NSString *_originSnapId;
    NSString *_inferredPlaceId;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *attachedStoryIds; // @synthesize attachedStoryIds=_attachedStoryIds;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *entities; // @synthesize entities=_entities;
@property(readonly, copy, nonatomic) NSString *geoFilterId; // @synthesize geoFilterId=_geoFilterId;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSString *inferredPlaceId; // @synthesize inferredPlaceId=_inferredPlaceId;
- (id)initWithCoder:(id)arg1;
- (id)initWithSnapLabels:(id)arg1 pivotLocation:(id)arg2 attachedStoryIds:(id)arg3 snapCaption:(id)arg4 venueId:(id)arg5 geoFilterId:(id)arg6 entities:(id)arg7 originStoryId:(id)arg8 webAttachmentURL:(id)arg9 originSnapId:(id)arg10 inferredPlaceId:(id)arg11;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *originSnapId; // @synthesize originSnapId=_originSnapId;
@property(readonly, copy, nonatomic) NSString *originStoryId; // @synthesize originStoryId=_originStoryId;
@property(readonly, copy, nonatomic) CLLocation *pivotLocation; // @synthesize pivotLocation=_pivotLocation;
@property(readonly, copy, nonatomic) NSString *snapCaption; // @synthesize snapCaption=_snapCaption;
@property(readonly, copy, nonatomic) NSArray *snapLabels; // @synthesize snapLabels=_snapLabels;
@property(readonly, copy, nonatomic) NSString *venueId; // @synthesize venueId=_venueId;
@property(readonly, copy, nonatomic) NSString *webAttachmentURL; // @synthesize webAttachmentURL=_webAttachmentURL;

@end

