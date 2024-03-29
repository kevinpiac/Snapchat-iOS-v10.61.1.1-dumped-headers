//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSURL, SCXCallout;

@interface SCXBitmojiCluster : NSObject <NSCopying>
{
    _Bool _enlarged;
    _Bool _depressed;
    _Bool _crowd;
    NSArray *_bitmojis;
    NSURL *_floorImageURL;
    NSURL *_propImageURL;
    SCXCallout *_callout;
    struct CLLocationCoordinate2D _centerCoordinate;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *bitmojis; // @synthesize bitmojis=_bitmojis;
@property(readonly, nonatomic) SCXCallout *callout; // @synthesize callout=_callout;
@property(readonly, nonatomic) struct CLLocationCoordinate2D centerCoordinate; // @synthesize centerCoordinate=_centerCoordinate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(readonly, nonatomic) NSURL *floorImageURL; // @synthesize floorImageURL=_floorImageURL;
- (unsigned long long)hash;
- (id)initWithCenterCoordinate:(struct CLLocationCoordinate2D)arg1 bitmojis:(id)arg2 floorImageURL:(id)arg3 propImageURL:(id)arg4 callout:(id)arg5 enlarged:(_Bool)arg6 depressed:(_Bool)arg7 crowd:(_Bool)arg8;
@property(readonly, nonatomic, getter=isCrowd) _Bool crowd; // @synthesize crowd=_crowd;
@property(readonly, nonatomic, getter=isDepressed) _Bool depressed; // @synthesize depressed=_depressed;
@property(readonly, nonatomic, getter=isEnlarged) _Bool enlarged; // @synthesize enlarged=_enlarged;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSURL *propImageURL; // @synthesize propImageURL=_propImageURL;

@end

