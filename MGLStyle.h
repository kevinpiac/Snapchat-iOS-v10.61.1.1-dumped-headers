//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MGLLight, MGLMapView, NSArray, NSMutableDictionary, NSSet, NSString, NSURL;

@interface MGLStyle : NSObject
{
    _Bool _localizesLabels;
    MGLMapView *_mapView;
    struct Style *_rawStyle;
    NSMutableDictionary *_localizedLayersByIdentifier;
}

+ (id)streetsStyleURL;
+ (id)streetsStyleURLWithVersion:(long long)arg1;
- (void).cxx_destruct;
@property(readonly, copy) NSURL *URL;
- (void)addLayer:(id)arg1;
- (void)addSource:(id)arg1;
- (void)addStyleClass:(id)arg1;
- (id)attributionInfosWithFontSize:(double)arg1 linkColor:(id)arg2;
- (unsigned long long)countOfLayers;
- (unsigned long long)countOfSources;
- (unsigned long long)countOfStyleClasses;
- (id)description;
- (void)getLayers:(id *)arg1 range:(struct _NSRange)arg2;
- (_Bool)hasStyleClass:(id)arg1;
- (id)imageForName:(id)arg1;
- (id)initWithRawStyle:(struct Style *)arg1 mapView:(id)arg2;
- (void)insertLayer:(id)arg1 aboveLayer:(id)arg2;
- (void)insertLayer:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertLayer:(id)arg1 belowLayer:(id)arg2;
- (void)insertObject:(id)arg1 inLayersAtIndex:(unsigned long long)arg2;
- (id)layerFromMBGLLayer:(struct Layer *)arg1;
- (id)layerWithIdentifier:(id)arg1;
@property(retain, nonatomic) NSArray *layers;
@property(retain, nonatomic) MGLLight *light;
@property(retain, nonatomic) NSMutableDictionary *localizedLayersByIdentifier; // @synthesize localizedLayersByIdentifier=_localizedLayersByIdentifier;
@property(nonatomic) _Bool localizesLabels; // @synthesize localizesLabels=_localizesLabels;
@property(readonly, nonatomic) __weak MGLMapView *mapView; // @synthesize mapView=_mapView;
- (id)mapboxStreetsSources;
- (id)memberOfSources:(id)arg1;
@property(readonly, copy) NSString *name;
- (id)objectInLayersAtIndex:(unsigned long long)arg1;
- (id)placeStyleLayers;
@property(readonly, nonatomic) struct Style *rawStyle; // @synthesize rawStyle=_rawStyle;
- (void)removeImageForName:(id)arg1;
- (void)removeLayer:(id)arg1;
- (void)removeObjectFromLayersAtIndex:(unsigned long long)arg1;
- (void)removeSource:(id)arg1;
- (void)removeStyleClass:(id)arg1;
- (id)roadStyleLayers;
- (void)setImage:(id)arg1 forName:(id)arg2;
@property(retain, nonatomic) NSSet *sources;
@property(retain, nonatomic) NSArray *styleClasses;
- (void)setStyleClasses:(id)arg1 transitionDuration:(double)arg2;
@property(nonatomic) struct MGLTransition transition;
- (id)sourceFromMBGLSource:(struct Source *)arg1;
- (id)sourceWithIdentifier:(id)arg1;

@end

