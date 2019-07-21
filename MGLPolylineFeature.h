//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MGLPolyline.h"

#import "MGLFeature-Protocol.h"

@class NSDictionary, NSString;

@interface MGLPolylineFeature : MGLPolyline <MGLFeature>
{
    id identifier;
    NSDictionary *attributes;
}

- (void).cxx_destruct;
- (id)attributeForKey:(id)arg1;
@property(copy, nonatomic) NSDictionary *attributes; // @synthesize attributes;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)geoJSONDictionary;
- (variant_d69826d0)geoJSONObject;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) id identifier; // @synthesize identifier;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end

