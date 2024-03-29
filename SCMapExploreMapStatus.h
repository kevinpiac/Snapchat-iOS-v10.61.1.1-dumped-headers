//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, NSURL, SCMTThumbnail, SCMapEffect, UIColor;

@interface SCMapExploreMapStatus : NSObject <NSCopying>
{
    _Bool _onboarding;
    NSString *_identifier;
    double _timestamp;
    double _zoom;
    NSString *_category;
    UIColor *_categoryColor;
    NSString *_title;
    NSString *_text;
    NSString *_emoji;
    NSString *_poiId;
    SCMTThumbnail *_poiThumbnail;
    SCMapEffect *_mapEffect;
    NSURL *_url;
    NSString *_urlDisplayText;
    UIColor *_urlColor;
    NSString *_placeId;
    struct CLLocationCoordinate2D _coordinate;
}

+ (id)mapStatusWithProtobuf:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(readonly, copy, nonatomic) UIColor *categoryColor; // @synthesize categoryColor=_categoryColor;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(readonly, copy, nonatomic) NSString *emoji; // @synthesize emoji=_emoji;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithIdentifier:(id)arg1 timestamp:(double)arg2 coordinate:(struct CLLocationCoordinate2D)arg3 zoom:(double)arg4 category:(id)arg5 categoryColor:(id)arg6 title:(id)arg7 text:(id)arg8 emoji:(id)arg9 poiId:(id)arg10 poiThumbnail:(id)arg11 onboarding:(_Bool)arg12 mapEffect:(id)arg13 url:(id)arg14 urlDisplayText:(id)arg15 urlColor:(id)arg16 placeId:(id)arg17;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic, getter=isOnboarding) _Bool onboarding; // @synthesize onboarding=_onboarding;
@property(readonly, copy, nonatomic) SCMapEffect *mapEffect; // @synthesize mapEffect=_mapEffect;
@property(readonly, copy, nonatomic) NSString *placeId; // @synthesize placeId=_placeId;
@property(readonly, copy, nonatomic) NSString *poiId; // @synthesize poiId=_poiId;
@property(readonly, nonatomic) SCMTThumbnail *poiThumbnail; // @synthesize poiThumbnail=_poiThumbnail;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) UIColor *urlColor; // @synthesize urlColor=_urlColor;
@property(readonly, copy, nonatomic) NSString *urlDisplayText; // @synthesize urlDisplayText=_urlDisplayText;
@property(readonly, nonatomic) double zoom; // @synthesize zoom=_zoom;

@end

