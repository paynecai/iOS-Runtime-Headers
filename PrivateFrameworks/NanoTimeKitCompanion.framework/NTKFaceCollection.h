/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKFaceCollection : NSObject <NTKFaceObserver> {
    NSMapTable * _UUIDsByFace;
    NSString * _collectionIdentifier;
    NSString * _debugName;
    NSUUID * _deviceUUID;
    NSMutableDictionary * _facesByUUID;
    NSString * _logIdentifier;
    NSHashTable * _observers;
    NSMutableArray * _orderedUUIDs;
    NSUUID * _selectedUUID;
}

@property (nonatomic, readonly) NSString *collectionIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSString *debugName;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSUUID *deviceUUID;
@property (getter=hasLoaded, nonatomic, readonly) BOOL hasLoaded;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NTKFace *selectedFace;
@property (nonatomic, readonly) unsigned int selectedFaceIndex;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)UUIDsByFace;
- (void)_addFace:(id)arg1 forUUID:(id)arg2 atIndex:(unsigned int)arg3;
- (void)_addFace:(id)arg1 forUUID:(id)arg2 atIndex:(unsigned int)arg3 suppressingCallbackToObserver:(id)arg4;
- (void)_didAddFace:(id)arg1 withUUID:(id)arg2 atIndex:(unsigned int)arg3;
- (void)_didMoveFace:(id)arg1 withUUID:(id)arg2 toIndex:(unsigned int)arg3;
- (void)_didRemoveFace:(id)arg1 withUUID:(id)arg2;
- (void)_didSelectFaceUUID:(id)arg1;
- (void)_fixSelectionBecauseSelectedUUIDWillBeRemovedAtIndex:(unsigned int)arg1 suppressingCallbackToObserver:(id)arg2;
- (void)_notifyAddedFace:(id)arg1 atIndex:(unsigned int)arg2 omitObserver:(id)arg3;
- (void)_notifyRemovedFace:(id)arg1 atIndex:(unsigned int)arg2 omitObserver:(id)arg3;
- (void)_notifyReorderedFacesOmittingObserver:(id)arg1;
- (void)_notifySelectedFaceOmittingObserver:(id)arg1;
- (void)_removeFaceForUUID:(id)arg1;
- (void)_removeFaceForUUID:(id)arg1 suppressingCallbackToObserver:(id)arg2;
- (void)_selectFaceUUID:(id)arg1 notify:(BOOL)arg2;
- (void)_setContentWithFaces:(id)arg1 order:(id)arg2 selection:(id)arg3;
- (void)_setSelectedUUID:(id)arg1 notify:(BOOL)arg2 suppressingCallbackToObserver:(id)arg3;
- (void)_throwIfNotLoaded:(SEL)arg1;
- (void)_updateLogIdentifier;
- (void)_updateOrderedUUIDsFromReference:(id)arg1 andNotifyReordered:(BOOL)arg2;
- (void)addFace:(id)arg1 atIndex:(unsigned int)arg2 suppressingCallbackToObserver:(id)arg3;
- (void)addObserver:(id)arg1;
- (void)appendFace:(id)arg1 suppressingCallbackToObserver:(id)arg2;
- (id)collectionIdentifier;
- (BOOL)containsFace:(id)arg1;
- (id)debugName;
- (id)deviceUUID;
- (void)enumerateFacesUsingBlock:(id /* block */)arg1;
- (id)faceAtIndex:(unsigned int)arg1;
- (id)facesByUUID;
- (BOOL)hasLoaded;
- (unsigned int)indexOfFace:(id)arg1;
- (id)initWithCollectionIdentifier:(id)arg1 deviceUUID:(id)arg2;
- (id)logIdentifier;
- (void)moveFace:(id)arg1 toIndex:(unsigned int)arg2 suppressingCallbackToObserver:(id)arg3;
- (unsigned int)numberOfFaces;
- (id)observers;
- (id)orderedUUIDs;
- (void)removeFace:(id)arg1 suppressingCallbackToObserver:(id)arg2;
- (void)removeFaceAtIndex:(unsigned int)arg1 suppressingCallbackToObserver:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)replaceFaceLocallyByCopy:(id)arg1 suppressingCallbackToObserver:(id)arg2;
- (void)reset;
- (id)selectedFace;
- (unsigned int)selectedFaceIndex;
- (id)selectedUUID;
- (void)setDebugName:(id)arg1;
- (void)setSelectedFace:(id)arg1 suppressingCallbackToObserver:(id)arg2;
- (void)setSelectedFaceIndex:(unsigned int)arg1 suppressingCallbackToObserver:(id)arg2;

@end